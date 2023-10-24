//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTBatchTranslationLoggingRequest : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct BatchTranslationLoggingRequest *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000012de4d
- (id)flatbuffData;	// IMP=0x000000000012dcd0
- (Offset_aa30fd21)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000012dba6
@property(readonly, nonatomic) int time_to_page_complete;
@property(readonly, nonatomic) int time_to_viewport_complete;
@property(readonly, nonatomic) int time_to_first_response;
@property(readonly, nonatomic) NSString *session_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012daac
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchTranslationLoggingRequest *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000012d901
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchTranslationLoggingRequest *)arg2;	// IMP=0x000000000012d8ec
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000012d8d2
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000012d8bb

@end

