//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSInvocation, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, XCTestCaseRun, XCTestContext, XCTestExpectationWaiter;

#import <WebDriverAgentLib/CDStructures.h>

@interface _XCTestCaseImplementation : NSObject
{
    NSInvocation *_invocation;
    XCTestCaseRun *_testCaseRun;
    BOOL _continueAfterFailure;
    NSMutableSet *_expectations;
    NSArray *_performanceMetricIDs;
    NSArray *_activePerformanceMetricIDs;
    NSMutableDictionary *_perfMetricDataForID;
    unsigned long long _startWallClockTime;
    struct time_value _startUserTime;
    struct time_value _startSystemTime;
    unsigned long long _measuringIteration;
    BOOL _isMeasuringMetrics;
    BOOL _didMeasureMetrics;
    BOOL _didStartMeasuring;
    BOOL _didStopMeasuring;
    NSString *_filePathForUnexpectedFailure;
    unsigned long long _lineNumberForUnexpectedFailure;
    unsigned long long _callAddressForCurrentWait;
    NSArray *_callAddressesForLastCreatedExpectation;
    long long _runLoopNestingCount;
    XCTestExpectationWaiter *_currentExpectationWaiter;
    NSMutableArray *_failureRecords;
    BOOL _shouldHaltWhenReceivesControl;
    BOOL _shouldIgnoreSubsequentFailures;
    NSMutableArray *_activityRecordStack;
    XCTestContext *_testContext;
}

@property(readonly) XCTestContext *testContext; // @synthesize testContext=_testContext;
@property(retain, nonatomic) XCTestExpectationWaiter *currentExpectationWaiter; // @synthesize currentExpectationWaiter=_currentExpectationWaiter;
@property(retain, nonatomic) NSMutableArray *activityRecordStack; // @synthesize activityRecordStack=_activityRecordStack;
@property BOOL shouldIgnoreSubsequentFailures; // @synthesize shouldIgnoreSubsequentFailures=_shouldIgnoreSubsequentFailures;
@property BOOL shouldHaltWhenReceivesControl; // @synthesize shouldHaltWhenReceivesControl=_shouldHaltWhenReceivesControl;
@property(retain, nonatomic) NSMutableArray *failureRecords; // @synthesize failureRecords=_failureRecords;
@property long long runLoopNestingCount; // @synthesize runLoopNestingCount=_runLoopNestingCount;
@property(copy) NSArray *callAddressesForLastCreatedExpectation; // @synthesize callAddressesForLastCreatedExpectation=_callAddressesForLastCreatedExpectation;
@property unsigned long long callAddressForCurrentWait; // @synthesize callAddressForCurrentWait=_callAddressForCurrentWait;
@property unsigned long long lineNumberForUnexpectedFailure; // @synthesize lineNumberForUnexpectedFailure=_lineNumberForUnexpectedFailure;
@property(copy) NSString *filePathForUnexpectedFailure; // @synthesize filePathForUnexpectedFailure=_filePathForUnexpectedFailure;
@property(retain, nonatomic) NSMutableSet *expectations; // @synthesize expectations=_expectations;
@property BOOL didStopMeasuring; // @synthesize didStopMeasuring=_didStopMeasuring;
@property BOOL didStartMeasuring; // @synthesize didStartMeasuring=_didStartMeasuring;
@property BOOL didMeasureMetrics; // @synthesize didMeasureMetrics=_didMeasureMetrics;
@property BOOL isMeasuringMetrics; // @synthesize isMeasuringMetrics=_isMeasuringMetrics;
@property unsigned long long measuringIteration; // @synthesize measuringIteration=_measuringIteration;
@property struct time_value startUserTime; // @synthesize startUserTime=_startUserTime;
@property struct time_value startSystemTime; // @synthesize startSystemTime=_startSystemTime;
@property unsigned long long startWallClockTime; // @synthesize startWallClockTime=_startWallClockTime;
@property(retain) NSMutableDictionary *perfMetricDataForID; // @synthesize perfMetricDataForID=_perfMetricDataForID;
@property(copy) NSArray *activePerformanceMetricIDs; // @synthesize activePerformanceMetricIDs=_activePerformanceMetricIDs;
@property(copy) NSArray *performanceMetricIDs; // @synthesize performanceMetricIDs=_performanceMetricIDs;
@property BOOL continueAfterFailure; // @synthesize continueAfterFailure=_continueAfterFailure;
@property(retain) XCTestCaseRun *testCaseRun; // @synthesize testCaseRun=_testCaseRun;
@property(retain) NSInvocation *invocation; // @synthesize invocation=_invocation;

- (void)resetExpectations;
- (void)addExpectation:(id)arg1;
- (id)init;

@end