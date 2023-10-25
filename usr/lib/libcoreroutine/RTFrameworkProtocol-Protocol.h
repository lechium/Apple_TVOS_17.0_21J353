//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <coreroutine/NSObject-Protocol.h>

@class NSArray, NSError, RTScenarioTrigger, RTVisit;

@protocol RTFrameworkProtocol <NSObject>
- (void)onVehicleEvents:(NSArray *)arg1 error:(NSError *)arg2;
- (void)onScenarioTrigger:(RTScenarioTrigger *)arg1 withError:(NSError *)arg2;
- (void)onLeechedLowConfidenceVisit:(RTVisit *)arg1 withError:(NSError *)arg2;
- (void)onLeechedVisit:(RTVisit *)arg1 withError:(NSError *)arg2;
- (void)onVisit:(RTVisit *)arg1 withError:(NSError *)arg2;
@end

