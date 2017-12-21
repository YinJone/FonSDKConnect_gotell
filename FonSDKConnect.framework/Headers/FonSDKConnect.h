//
//  FonSDKConnect.h
//  FonSDKConnect
//
//  Created by Alejandro Espinosa on 16/5/17.
//  Copyright © 2017 Fon. All rights reserved.
//

#import <UIKit/UIKit.h>
@import FonSDK;
#import "FonSDKConnectErrors.h"
#import "FNState.h"
#import "FonSDKConnectDelegate.h"
@import CocoaLumberjack;

//! Project version number for FonSDKConnect.
FOUNDATION_EXPORT double FonSDKConnectVersionNumber;

//! Project version string for FonSDKConnect.
FOUNDATION_EXPORT const unsigned char FonSDKConnectVersionString[];

/**
 Class that lets you autoconnect to WiFi networks managed by FON.
 */
@interface FonSDKConnect : NSObject

/**
 Property used in case you want to overwrite the name of the managed networks that appears in the WiFi setting screen.
 */
@property (copy, nonatomic) NSString *displayName;

/**
 Delegate of the FonSDKConnect class.
 */
@property (weak, nonatomic) id<FonSDKConnectDelegate> delegate;

/**
 Start the autoconnection to WiFi networks.
 If the phone is not provisioned, this method will generate a mobile config file that contains information about the managed networks. This file must be opened manually in safari by the end user that should install it on his device. Once this file is installed, the start method will be able to register to autoconnect to networks.
 
 @param credentials Credentials used to generate and connect to the different networks.
 @param clientID The client id of the provider.
 @param clientSecret The client secret of the provider.
 @param completion A block object to be executed when the task finishes. This block has no return value and takes one argument: an error in case it finishes unsuccessfully describing the error that occurred.
 */
- (void)startWithCredentials:(FNCredentials *)credentials clientID:(NSString *)clientID clientSecret:(NSString *)clientSecret completion:(void (^)(NSError *error))completion;

/**
 Stop the autoconnection to WiFi networks.
 */
- (void)stop;

/**
 Stop the autoconnection to WiFi networks and removed all data stored in the phone.
 
 @warning The mobile config file must be removed manually by the end user.
 */
- (void)reset;

/**
 Return the URL that contains the mobile config provisioning, this URL must be opened in Safari so the user can download it.
 
 @warning 'startWithCredentials:clientID:clientSecret:completion:' must be executed successfully before calling this method.
 @param country for all Countries set nil
 @param completion A block object to be executed when the task finishes. This block has no return value and takes two arguments: the URL that contains the mobile config provisioning, and an error in case it finishes unsuccessfully describing the error that occurred.
 */
- (void)mobileConfigURLWithURLScheme:(NSString*)urlScheme country:(NSString*)country completion:(void (^)(NSString *mobileConfigURL, NSError *error))completion;
- (void)mobileConfigURLWithURLScheme:(NSString*)urlScheme countries:(NSArray<NSString*> *)countries completion:(void (^)(NSString *mobileConfigURL, NSError *error))completion;

/**
 Return if a mobile config provisioning file is installed in the device.
 
 @return YES if a mobile config provisioning file is installed in the device, NO otherwise.
 */
- (BOOL)isMobileConfigInstalled;

/**
 Return the state of the SDK.
 
 @return State of the SDK.
 */
- (FNState)state;

/**
 Create user with phone number
 
 @param phone The phone number
 @param completion This block return an error in case it finishes unsuccessfully describing the error that occurred.
 */
- (void)createUserWithPhone: (NSString*)phone completion:(void (^)(NSError *error))completion;

/**
 Validate user and return Username and secret
 
 @param phone The phone number
 @param completion This block return the username and secret and an error in case it finishes unsuccessfully describing the error that occurred.
 */
- (void)validateUserWithPhone: (NSString*) phone code:(NSString*)code completion:(void (^)(NSString *username, NSString *secret, NSError *error))completion;

@end
