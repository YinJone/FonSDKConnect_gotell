//
//  FonSDKConnectDelegate.h
//  FonSDKConnect
//
//  Created by Alejandro Espinosa on 16/5/17.
//  Copyright © 2017 Fon. All rights reserved.
//

@import Foundation;
#import "FNState.h"
#import "FNNetwork.h"
#import "FNSession.h"

/**
 Delegate of the FonSDKConnect class.
 */
@protocol FonSDKConnectDelegate <NSObject>

/**
 Method called to indicate that is necessary to install the mobile config.
 */
- (void)showSafariURLRequired;

@optional

/**
 Called when the state of the SDK changes.
 
 @param state The new state of the SDK.
 */
- (void)stateChanged:(FNState)state;

/**
 Called when the state of the SDK changes.
 
 @param state The new state of the SDK.
 @param network The network. Only in some states.
 @param wisprResult The result of wispr. Only in some states.
 */
- (void)stateChanged:(FNState)state network:(FNNetwork*)network wisprResult:(FWRWisprResult *)wisprResult;

/**
 Notifies last Session
 
 @param session Last Session Info.
 */
-(void) lastSession:(FNSession *)session;

@end

