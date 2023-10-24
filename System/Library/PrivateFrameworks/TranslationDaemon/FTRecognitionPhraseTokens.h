//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTRecognitionPhraseTokens : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct RecognitionPhraseTokens *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000ab8e7
- (id)flatbuffData;	// IMP=0x00000000000ab76a
- (Offset_8140066c)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000ab358
- (void)tokens_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ab1a7
- (unsigned long long)tokens_count;	// IMP=0x00000000000ab10b
- (id)tokens_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000ab012
@property(readonly, nonatomic) NSArray *tokens;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000aaecb
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecognitionPhraseTokens *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000aad20
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecognitionPhraseTokens *)arg2;	// IMP=0x00000000000aad0b
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000aacf1
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000aacda

@end
