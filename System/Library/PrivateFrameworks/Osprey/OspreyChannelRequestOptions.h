//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OspreyChannelRequestOptions : NSObject
{
    _Bool _compressionEnabled;	// 8 = 0x8
    _Bool _forceHTTPv2;	// 9 = 0x9
}

@property(nonatomic) _Bool forceHTTPv2; // @synthesize forceHTTPv2=_forceHTTPv2;
@property(nonatomic, getter=isCompressionEnabled) _Bool compressionEnabled; // @synthesize compressionEnabled=_compressionEnabled;
- (void)applyToOspreyMutableRequest:(id)arg1;	// IMP=0x000000000000ea74
- (id)init;	// IMP=0x000000000000ea3a

@end

