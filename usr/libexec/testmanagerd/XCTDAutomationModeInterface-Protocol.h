//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSObject, NSUUID;
@protocol OS_dispatch_queue;

@protocol XCTDAutomationModeInterface <NSObject>
@property(readonly) _Bool isAutomationModeEnabled;
- (void)unregisterAutomationModeChangeHandlerWithToken:(NSUUID *)arg1;
- (NSUUID *)registerAutomationModeChangeHandlerOnQueue:(NSObject<OS_dispatch_queue> *)arg1 withBlock:(void (^)(_Bool))arg2;
- (void)disableAutomationModeForClient:(id)arg1;
- (_Bool)enableAutomationModeForClient:(id)arg1 error:(id *)arg2;
@end

