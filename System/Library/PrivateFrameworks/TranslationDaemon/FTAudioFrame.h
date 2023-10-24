//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTAudioFrame : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct AudioFrame *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000011c256
- (id)flatbuffData;	// IMP=0x000000000011c0d9
- (Offset_a1ce9f39)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000011bfa8
- (void)audio_bytes:(CDUnknownBlockType)arg1;	// IMP=0x000000000011bf39
@property(readonly, nonatomic) NSData *audio_bytes;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011bee3
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AudioFrame *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000011bd38
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AudioFrame *)arg2;	// IMP=0x000000000011bd23
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000011bd09
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000011bcf2

@end

