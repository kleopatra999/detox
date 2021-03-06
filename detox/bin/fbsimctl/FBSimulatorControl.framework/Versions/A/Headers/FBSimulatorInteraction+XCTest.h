/**
 * Copyright (c) 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <FBSimulatorControl/FBSimulatorInteraction.h>

@class FBApplicationLaunchConfiguration;
@class FBTestBundle;
@protocol FBTestManagerTestReporter;

@interface FBSimulatorInteraction (XCTest)

/**
 Starts testing application using test bundle. It will use simulator's auxillaryDirectory as working directory

 @param configuration configuration used to launch test runner application.
 @param testBundlePath path to XCTest bundle used for testing.
 @return the reciever, for chaining.
 */
- (instancetype)startTestRunnerLaunchConfiguration:(FBApplicationLaunchConfiguration *)configuration testBundlePath:(NSString *)testBundlePath;

/**
 Starts testing application using test bundle. It will use simulator's auxillaryDirectory as working directory

 @param configuration configuration used to launch test runner application.
 @param testBundlePath path to XCTest bundle used for testing.
 @param reporter the reporter to report to.
 @return the reciever, for chaining.
 */
- (instancetype)startTestRunnerLaunchConfiguration:(FBApplicationLaunchConfiguration *)configuration testBundlePath:(NSString *)testBundlePath reporter:(id<FBTestManagerTestReporter>)reporter;

/**
 Starts testing application using test bundle.

 @param configuration configuration used to launch test runner application.
 @param testBundlePath path to XCTest bundle used for testing
 @param reporter the reporter to report to.
 @param workingDirectory xctest working directory.
 @return the reciever, for chaining.
 */
- (instancetype)startTestRunnerLaunchConfiguration:(FBApplicationLaunchConfiguration *)configuration testBundlePath:(NSString *)testBundlePath reporter:(id<FBTestManagerTestReporter>)reporter workingDirectory:(NSString *)workingDirectory;

@end
