//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CSTCUIntendedInfoProviding;

@interface CSTCUPruner : NSObject
{
    id <CSTCUIntendedInfoProviding> _tcuIntendedInfoProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000000aaa5
@property(nonatomic, setter=registerInfoProviderNode:) __weak id <CSTCUIntendedInfoProviding> tcuIntendedInfoProvider; // @synthesize tcuIntendedInfoProvider=_tcuIntendedInfoProvider;
- (void)processTRPCandidateInfo:(id)arg1 requestId:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000aa68
- (id)init;	// IMP=0x001000000000aa5a

@end

