//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSEndpointerProxy;

@interface CSTrpTcuMapper : NSObject
{
    CSEndpointerProxy *_proxy;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000a56d9
@property(nonatomic, setter=registerEndpointerProxy:) __weak CSEndpointerProxy *proxy; // @synthesize proxy=_proxy;
- (id)getSelectedTrpIdForEndpointEvent:(double)arg1 withMetrics:(id)arg2 OfType:(long long)arg3;	// IMP=0x00100000000a56aa
- (id)processTRPWithId:(id)arg1 withSpeechPackage:(id)arg2 enforceTrpSelection:(_Bool)arg3;	// IMP=0x00100000000a56a2
- (void)processTCUFinalizedForTrpId:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a5687
- (void)resetForNewRequest;	// IMP=0x00100000000a5681
- (id)initWithQueue:(id)arg1;	// IMP=0x00100000000a5673

@end
