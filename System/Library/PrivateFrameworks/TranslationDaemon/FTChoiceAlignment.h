//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTChoiceAlignment : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct ChoiceAlignment *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000b0835
- (id)flatbuffData;	// IMP=0x00000000000b06b8
- (Offset_22d7513b)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000affca
- (void)pre_itn_token_to_post_itn_char_alignments_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000afe19
- (unsigned long long)pre_itn_token_to_post_itn_char_alignments_count;	// IMP=0x00000000000afd7d
- (id)pre_itn_token_to_post_itn_char_alignments_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000afc84
@property(readonly, nonatomic) NSArray *pre_itn_token_to_post_itn_char_alignments;
- (void)post_itn_choice_indices_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000af9f4
- (unsigned long long)post_itn_choice_indices_count;	// IMP=0x00000000000af958
- (id)post_itn_choice_indices_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000af87d
@property(readonly, nonatomic) NSArray *post_itn_choice_indices;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000af754
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ChoiceAlignment *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000af5a9
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ChoiceAlignment *)arg2;	// IMP=0x00000000000af594
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000af57a
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000af563

@end
