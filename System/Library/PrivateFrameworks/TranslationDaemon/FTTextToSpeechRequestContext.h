//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTTextToSpeechRequestContext : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TextToSpeechRequestContext *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000fb98b
- (id)flatbuffData;	// IMP=0x00000000000fb80e
- (Offset_07052b8d)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000fb372
@property(readonly, nonatomic) NSString *dialog_identifier;
- (void)context_info_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000fb153
- (unsigned long long)context_info_count;	// IMP=0x00000000000fb0b7
- (id)context_info_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000fafbe
@property(readonly, nonatomic) NSArray *context_info;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000fae95
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRequestContext *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000facea
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRequestContext *)arg2;	// IMP=0x00000000000facd5
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000facbb
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000faca4

@end

