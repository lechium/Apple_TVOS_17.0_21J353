//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FTCreateLanguageProfileRequest, FTCreateLanguageProfileResponse, NSObject;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTMutableNapgCreateLanguageProfileMessage
{
}

+ (long long)session_message_typeForObject:(id)arg1;	// IMP=0x00600000000a3660
+ (long long)session_message_typeForMutableObject:(id)arg1;	// IMP=0x00600000000a35d1
+ (Class)session_message_mutableClassForType:(long long)arg1;	// IMP=0x00600000000a3591
@property(copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message; // @dynamic session_message;
@property(copy, nonatomic) FTCreateLanguageProfileResponse *session_messageAsFTCreateLanguageProfileResponse;
@property(copy, nonatomic) FTCreateLanguageProfileRequest *session_messageAsFTCreateLanguageProfileRequest;
@property(nonatomic) long long session_message_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a3164
- (id)init;	// IMP=0x00000000000a30d6

@end

