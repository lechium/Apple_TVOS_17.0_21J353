//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TVHKFairPlaySAPContext : NSObject
{
    void *_context;	// 8 = 0x8
}

+ (id)_fixedUpURLPathString:(id)arg1;	// IMP=0x00600000000a5a99
@property(nonatomic) void *context; // @synthesize context=_context;
- (id)_encryptData:(id)arg1;	// IMP=0x00000000000a5a91
- (id)decryptData:(id)arg1;	// IMP=0x00000000000a5a89
- (id)signURLPathString:(id)arg1;	// IMP=0x00000000000a58e8
- (void)dealloc;	// IMP=0x00000000000a58aa
- (id)initWithFairPlaySAPContext:(void *)arg1;	// IMP=0x00000000000a586d
- (id)init;	// IMP=0x00000000000a57fe
- (id)new;	// IMP=0x00000000000a57cf

@end
