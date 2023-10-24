//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface SLFetchShareableContentAction
{
    NSString *_requestedTypeIdentifier;	// 8 = 0x8
    long long _requestedItemProviderIndex;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000001e715
- (void).cxx_destruct;	// IMP=0x000000000001e91f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001e826
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001e71d
@property(readonly, nonatomic) long long requestedItemProviderIndex; // @synthesize requestedItemProviderIndex=_requestedItemProviderIndex;
@property(readonly, copy, nonatomic) NSString *requestedTypeIdentifier; // @synthesize requestedTypeIdentifier=_requestedTypeIdentifier;
- (id)initWithSceneIdentifier:(id)arg1 requestedTypeIdentifier:(id)arg2 requestedItemProviderIndex:(long long)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000001e65a

@end

