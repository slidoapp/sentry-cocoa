//
//  SentryCrashInstallation.h
//  Sentry
//
//  Created by Daniel Griesser on 10/05/2017.
//  Copyright © 2017 Sentry. All rights reserved.
//

#import <Foundation/Foundation.h>

#if __has_include(<SentryCrash/SentryCrash.h>)
#import <Sentry/SentryCrash.h>
#import <Sentry/SentryCrashInstallation.h>
#elif __has_include("SentryCrash.h")
#import "SentryCrash.h"
#import "SentryCrashInstallation.h"
#endif

#if WITH_KSCRASH
@interface SentryCrashInstallation : SentryCrashInstallation
#else
@interface SentryCrashInstallation : NSObject
#endif

- (void)sendAllReports;

@end
