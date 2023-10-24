//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSFileAccessNode, NSURL;

__attribute__((visibility("hidden")))
@interface NSFileWritingClaim
{
    NSURL *_url;	// 208 = 0xd0
    _Bool _urlDidChange;	// 216 = 0xd8
    unsigned long long _options;	// 224 = 0xe0
    NSFileAccessNode *_location;	// 232 = 0xe8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000007c3c9c
- (void)protectFilesAgainstEviction;	// IMP=0x00000000007c4dad
- (id)allURLs;	// IMP=0x00000000007c4d82
- (_Bool)blocksClaim:(id)arg1;	// IMP=0x00000000007c4d54
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;	// IMP=0x00000000007c4cf6
- (void)devalueSelf;	// IMP=0x00000000007c4c18
- (void)invokeClaimer;	// IMP=0x00000000007c48f8
- (void)resolveURLsThenContinueInvokingClaimer:(CDUnknownBlockType)arg1;	// IMP=0x00000000007c4768
- (void)granted;	// IMP=0x00000000007c431b
- (_Bool)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000007c42ca
- (_Bool)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000007c426f
- (_Bool)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(_Bool)arg2;	// IMP=0x00000000007c40ee
- (void)forwardUsingConnection:(id)arg1 crashHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000007c3ca4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000007c3b55
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000007c3a3c
- (void)dealloc;	// IMP=0x00000000007c39d7
- (id)initWithPurposeID:(id)arg1 url:(id)arg2 options:(unsigned long long)arg3 claimer:(CDUnknownBlockType)arg4;	// IMP=0x00000000007c3955

@end

