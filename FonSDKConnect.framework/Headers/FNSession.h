//
//  FNSession.h
//  FonSDKConnect
//
//  Created by Alejandro Espinosa on 17/8/17.
//  Copyright © 2017 Fon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FNNetwork.h"

@interface FNSession : NSObject

/**
 The Network of session.
 */
@property (nonatomic, strong) FNNetwork *network;

/**
 Start date of session.
 */
@property (nonatomic, strong) NSDate *start;

/**
 End date of session.
 */
@property (nonatomic, strong) NSDate *end;

/**
 Total bytes download.
 */
@property (nonatomic, strong) NSNumber *totalBytesDL;

/**
 Total bytes Upload.
 */
@property (nonatomic, strong) NSNumber *totalBytesUL;

@end
