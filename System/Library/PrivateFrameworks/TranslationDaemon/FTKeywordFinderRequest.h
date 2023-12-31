//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTRecognitionResult, NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTKeywordFinderRequest : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct KeywordFinderRequest *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000f4ae5
- (id)flatbuffData;	// IMP=0x00000000000f4968
- (Offset_002dc819)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000f4349
@property(readonly, nonatomic) _Bool enable_sanitization;
@property(readonly, nonatomic) FTRecognitionResult *recognition_result;
- (void)keywords_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000f4094
- (unsigned long long)keywords_count;	// IMP=0x00000000000f3ff8
- (id)keywords_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000f3eff
@property(readonly, nonatomic) NSArray *keywords;
@property(readonly, nonatomic) NSString *language;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f3c8c
- (id)initWithFlatbuffData:(id)arg1 root:(const struct KeywordFinderRequest *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000f3ae1
- (id)initWithFlatbuffData:(id)arg1 root:(const struct KeywordFinderRequest *)arg2;	// IMP=0x00000000000f3acc
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000f3ab2
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000f3a9b

@end

