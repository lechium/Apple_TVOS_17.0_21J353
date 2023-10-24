//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTShortcutFuzzyMatchRequest, FTShortcutFuzzyMatchResponse, NSData, NSMutableDictionary;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTNlShortcutFuzzyMatchMessage : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct NlShortcutFuzzyMatchMessage *_root;	// 24 = 0x18
}

+ (long long)session_message_typeForImmutableObject:(id)arg1;	// IMP=0x0010000000082f27
+ (Class)session_message_immutableClassForType:(long long)arg1;	// IMP=0x0010000000082ee7
- (void).cxx_destruct;	// IMP=0x000000000008329d
- (id)flatbuffData;	// IMP=0x0000000000083120
- (Offset_4ff85b81)addObjectToBuffer:(void *)arg1;	// IMP=0x0000000000082fb6
@property(readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property(readonly, nonatomic) FTShortcutFuzzyMatchResponse *session_messageAsFTShortcutFuzzyMatchResponse;
@property(readonly, nonatomic) FTShortcutFuzzyMatchRequest *session_messageAsFTShortcutFuzzyMatchRequest;
@property(readonly, nonatomic) long long session_message_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000082c80
- (id)initWithFlatbuffData:(id)arg1 root:(const struct NlShortcutFuzzyMatchMessage *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000082a9d
- (id)initWithFlatbuffData:(id)arg1 root:(const struct NlShortcutFuzzyMatchMessage *)arg2;	// IMP=0x0000000000082a88
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000082a6e
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000082a57

@end

