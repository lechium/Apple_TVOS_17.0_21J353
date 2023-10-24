//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary, NSString;
@protocol HMDModernTransportMessageContextFactory;

__attribute__((visibility("hidden")))
@interface HMDModernTransportMessageContextManager : HMFObject
{
    id <HMDModernTransportMessageContextFactory> _factory;	// 8 = 0x8
    NSMutableDictionary *_contexts;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x00100000004fc645
- (void).cxx_destruct;	// IMP=0x00000000004fc5a5
@property(readonly, nonatomic) NSMutableDictionary *contexts; // @synthesize contexts=_contexts;
@property(readonly, nonatomic) __weak id <HMDModernTransportMessageContextFactory> factory; // @synthesize factory=_factory;
- (id)contextWithMessage:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 dateProvider:(id)arg4 timerProvider:(id)arg5;	// IMP=0x00000000004fc4a8
- (void)completeContext:(id)arg1 withPayload:(id)arg2 error:(id)arg3 isFinal:(_Bool)arg4;	// IMP=0x00000000004fc027
- (id)contextForIdentifier:(id)arg1;	// IMP=0x00000000004fbfad
- (id)createContextWithMessage:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 dateProvider:(id)arg4 timerProvider:(id)arg5;	// IMP=0x00000000004fbd17
- (id)initWithFactory:(id)arg1;	// IMP=0x00000000004fbc8f
- (id)init;	// IMP=0x00000000004fbc7a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

