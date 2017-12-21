//
//  FonSDKConnectErrors.h
//  FonSDKConnect
//
//  Created by Alejandro Espinosa on 16/5/17.
//  Copyright © 2017 Fon. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ENUM(NSInteger) {
    /**
     The phone wasn't provisioned so you can not continue with registration.
     */
    FONTryingToContinueWithNoProvisionError = 10001,
    
    /**
     It's not possible stopped
     */
    FONNotPosibleStopped = 10002,
    
    /**
     Error when you call to register before provisioned the phone.
     */
    FONPhoneNotProvisionedError = 10003,
};
