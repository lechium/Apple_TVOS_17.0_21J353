//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTTranslationPhraseMetaInfo_AlternativeSelectedSpan_Alternative : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct Alternative *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000e65c1
- (id)flatbuffData;	// IMP=0x00000000000e6444
- (Offset_fe41c054)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000e639d
@property(readonly, nonatomic) int selection_span_index;
@property(readonly, nonatomic) int translation_phrase_index;
@property(readonly, nonatomic) int alternative_description_index;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e6311
- (id)initWithFlatbuffData:(id)arg1 root:(const struct Alternative *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000e6166
- (id)initWithFlatbuffData:(id)arg1 root:(const struct Alternative *)arg2;	// IMP=0x00000000000e6151
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000e6137
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000e6120

@end

