//
//  SentryCrashReportSink.h
//  Sentry
//
//  Created by Daniel Griesser on 10/05/2017.
//  Copyright © 2017 Sentry. All rights reserved.
//

#import <Foundation/Foundation.h>

#if __has_include(<SentryCrash/SentryCrash.h>)
#import <Sentry/SentryCrash.h>
#elif __has_include("SentryCrash.h")
#import "SentryCrash.h"
#endif

#if WITH_KSCRASH
@interface SentryCrashReportSink : NSObject <SentryCrashReportFilter>
#else

@interface SentryCrashReportSink : NSObject
#endif

@end
