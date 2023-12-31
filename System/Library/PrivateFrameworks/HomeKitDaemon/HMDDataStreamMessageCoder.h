//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface HMDDataStreamMessageCoder : NSObject
{
}

+ (id)responseHeaderForRequestHeader:(id)arg1 status:(unsigned short)arg2;	// IMP=0x0080000000c25df5
+ (id)requestHeaderForProtocol:(id)arg1 topic:(id)arg2 identifier:(id)arg3;	// IMP=0x0080000000c25d06
+ (id)eventHeaderForProtocol:(id)arg1 topic:(id)arg2;	// IMP=0x0080000000c25c3a
+ (_Bool)readHeaderFromPartialData:(const char *)arg1 length:(unsigned long long)arg2 frameType:(unsigned char *)arg3 payloadLength:(unsigned long long *)arg4;	// IMP=0x0080000000c25bfb
+ (_Bool)readHeaderFromPartialData:(id)arg1 frameType:(unsigned char *)arg2 payloadLength:(unsigned long long *)arg3;	// IMP=0x0080000000c25b3f
+ (id)buildUnencryptedOPACKHeader:(id)arg1 payload:(id)arg2 error:(id *)arg3;	// IMP=0x0080000000c25b26
+ (_Bool)unpackUnencryptedOPACKFrame:(id)arg1 receivedHeader:(id *)arg2 receivedPayload:(id *)arg3 error:(id *)arg4;	// IMP=0x0080000000c25b0d
+ (id)encryptEncryptedOPACKHeader:(id)arg1 payload:(id)arg2 sessionEncryption:(id)arg3 error:(id *)arg4;	// IMP=0x0080000000c25af4
+ (_Bool)decryptEncryptedOPACKFrame:(id)arg1 sessionEncryption:(id)arg2 receivedHeader:(id *)arg3 receivedPayload:(id *)arg4 error:(id *)arg5;	// IMP=0x0080000000c25adb
+ (id)_buildUnencryptedOPACKHeader:(id)arg1 payload:(id)arg2 error:(id *)arg3;	// IMP=0x0080000000c259d3
+ (id)_encryptEncryptedOPACKHeader:(id)arg1 payload:(id)arg2 sessionEncryption:(id)arg3 error:(id *)arg4;	// IMP=0x0080000000c2583f
+ (id)_encodeOPACKHeader:(id)arg1 payload:(id)arg2 error:(id *)arg3;	// IMP=0x0080000000c2567b
+ (_Bool)_unpackUnencryptedOPACKFrame:(id)arg1 receivedHeader:(id *)arg2 receivedPayload:(id *)arg3 error:(id *)arg4;	// IMP=0x0080000000c2558f
+ (_Bool)_decodeOPACKFrame:(id)arg1 receivedHeader:(id *)arg2 receivedPayload:(id *)arg3 error:(id *)arg4;	// IMP=0x0080000000c25360
+ (_Bool)_decryptEncryptedOPACKFrame:(id)arg1 sessionEncryption:(id)arg2 receivedHeader:(id *)arg3 receivedPayload:(id *)arg4 error:(id *)arg5;	// IMP=0x0080000000c251c5

@end

