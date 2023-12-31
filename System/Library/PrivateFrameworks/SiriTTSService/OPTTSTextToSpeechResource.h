//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface OPTTSTextToSpeechResource : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TextToSpeechResource *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000fac6d
- (id)flatbuffData;	// IMP=0x00000000000fab56
- (Offset_ccd79ebd)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000faa17
@property(readonly, nonatomic) NSString *version;
@property(readonly, nonatomic) NSString *language;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000fa930
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechResource *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000fa74d
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechResource *)arg2;	// IMP=0x00000000000fa738
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000fa71e
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000fa707

@end

