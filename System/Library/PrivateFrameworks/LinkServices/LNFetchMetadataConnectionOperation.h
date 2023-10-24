//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LNBundleMetadata;

__attribute__((visibility("hidden")))
@interface LNFetchMetadataConnectionOperation
{
    LNBundleMetadata *_metadata;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000009a802
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) LNBundleMetadata *metadata; // @synthesize metadata=_metadata;
- (void)finishWithError:(id)arg1;	// IMP=0x000000000009a6d1
- (void)start;	// IMP=0x000000000009a5d8
- (id)initWithConnectionInterface:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000009a3ea

@end

