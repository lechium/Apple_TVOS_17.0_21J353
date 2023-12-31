//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FTAudioPacket, FTCancelRequest, FTFinishAudio, FTPronGuessResponse, FTStartPronGuessRequest, NSObject;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTMutableApgPronGuessMessage
{
}

+ (long long)session_message_typeForObject:(id)arg1;	// IMP=0x00600000000951b0
+ (long long)session_message_typeForMutableObject:(id)arg1;	// IMP=0x00600000000950ae
+ (Class)session_message_mutableClassForType:(long long)arg1;	// IMP=0x0060000000095074
@property(copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message; // @dynamic session_message;
@property(copy, nonatomic) FTPronGuessResponse *session_messageAsFTPronGuessResponse;
@property(copy, nonatomic) FTCancelRequest *session_messageAsFTCancelRequest;
@property(copy, nonatomic) FTFinishAudio *session_messageAsFTFinishAudio;
@property(copy, nonatomic) FTAudioPacket *session_messageAsFTAudioPacket;
@property(copy, nonatomic) FTStartPronGuessRequest *session_messageAsFTStartPronGuessRequest;
@property(nonatomic) long long session_message_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009494a
- (id)init;	// IMP=0x00000000000948bc

@end

