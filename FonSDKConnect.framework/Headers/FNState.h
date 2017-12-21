//
//  FNState.h
//  FonSDKConnect
//
//  Created by Alejandro Espinosa on 16/5/17.
//  Copyright © 2017 Fon. All rights reserved.
//

/**
 States of State Machine.
 */
typedef NS_ENUM(NSUInteger, FNState){
    /**
     State Stopped
     */
    FNStateStopped = 0,
    /**
     State Disconnected
     */
    FNStateDisconnected,
    /**
     State Connecting
     */
    FNStateConnecting,
    /**
     State Connected
     */
    FNStateConnected
};
