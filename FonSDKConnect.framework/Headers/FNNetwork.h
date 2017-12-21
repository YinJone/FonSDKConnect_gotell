//
//  FNNetwork.h
//  FonSDKConnect
//
//  Created by Alejandro Espinosa on 30/6/17.
//  Copyright © 2017 Fon. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FNNetwork : NSObject

/**
 The SSID for the Wi-Fi network.
 */
@property (copy, nonatomic) NSString *SSID;

/**
 The BSSID for the Wi-Fi network.
 */
@property (copy, nonatomic) NSString *BSSID;

/**
 The signal strength for the Wi-Fi network. The value lies within the range 0.0 (weak/no signal) to 1.0 (strong signal).
 */
@property (assign, nonatomic) double signalStrength;

/**
 The VNPs for network.
 */
@property (copy, nonatomic) NSArray *VNPs;

@end
