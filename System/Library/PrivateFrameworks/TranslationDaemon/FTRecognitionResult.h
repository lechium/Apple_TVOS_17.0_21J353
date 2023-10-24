//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTRecognitionSausage, NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTRecognitionResult : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct RecognitionResult *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000b2d37
- (id)flatbuffData;	// IMP=0x00000000000b2bba
- (Offset_397abe9f)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000b1d8f
- (void)choice_alignments_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b1bde
- (unsigned long long)choice_alignments_count;	// IMP=0x00000000000b1b42
- (id)choice_alignments_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000b1a49
@property(readonly, nonatomic) NSArray *choice_alignments;
- (void)pre_itn_token_to_post_itn_char_alignment_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b177a
- (unsigned long long)pre_itn_token_to_post_itn_char_alignment_count;	// IMP=0x00000000000b16de
- (id)pre_itn_token_to_post_itn_char_alignment_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000b15e5
@property(readonly, nonatomic) NSArray *pre_itn_token_to_post_itn_char_alignment;
- (void)post_itn_nbest_choices_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b1316
- (unsigned long long)post_itn_nbest_choices_count;	// IMP=0x00000000000b127a
- (id)post_itn_nbest_choices_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000b1181
@property(readonly, nonatomic) NSArray *post_itn_nbest_choices;
- (void)pre_itn_nbest_choices_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b0eb2
- (unsigned long long)pre_itn_nbest_choices_count;	// IMP=0x00000000000b0e16
- (id)pre_itn_nbest_choices_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000b0d1d
@property(readonly, nonatomic) NSArray *pre_itn_nbest_choices;
@property(readonly, nonatomic) FTRecognitionSausage *post_itn;
@property(readonly, nonatomic) FTRecognitionSausage *pre_itn;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b0a4e
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecognitionResult *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000b08a3
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecognitionResult *)arg2;	// IMP=0x00000000000b088e
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000b0874
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000b085d

@end
