//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTStreamingTranslationRequest : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct StreamingTranslationRequest *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000e3a6e
- (id)flatbuffData;	// IMP=0x00000000000e38f1
- (Offset_079272fb)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000e349e
@property(readonly, nonatomic) _Bool final_message;
@property(readonly, nonatomic) NSString *app_id;
@property(readonly, nonatomic) long long opt_in_status;
@property(readonly, nonatomic) _Bool disable_log;
@property(readonly, nonatomic) NSString *sequence_id;
@property(readonly, nonatomic) NSString *translation_text;
@property(readonly, nonatomic) NSString *target_language;
@property(readonly, nonatomic) NSString *source_language;
@property(readonly, nonatomic) NSString *task;
@property(readonly, nonatomic) NSString *request_id;
@property(readonly, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e3093
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StreamingTranslationRequest *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000e2ee8
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StreamingTranslationRequest *)arg2;	// IMP=0x00000000000e2ed3
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000e2eb9
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000e2ea2

@end

