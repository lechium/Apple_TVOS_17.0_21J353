//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FTTranslationRequest, FTTranslationResponse, NSObject;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTMutableMtTranslationMessage
{
}

+ (long long)session_message_typeForObject:(id)arg1;	// IMP=0x00600000000a3cbd
+ (long long)session_message_typeForMutableObject:(id)arg1;	// IMP=0x00600000000a3c2e
+ (Class)session_message_mutableClassForType:(long long)arg1;	// IMP=0x00600000000a3bee
@property(copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message; // @dynamic session_message;
@property(copy, nonatomic) FTTranslationResponse *session_messageAsFTTranslationResponse;
@property(copy, nonatomic) FTTranslationRequest *session_messageAsFTTranslationRequest;
@property(nonatomic) long long session_message_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a37c1
- (id)init;	// IMP=0x00000000000a3733

@end
