//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface MCSessionPeerConnectionData : NSObject
{
    _Bool _hasIdentitySet;	// 8 = 0x8
    NSData *_gckSessionConnectionData;	// 16 = 0x10
    long long _encryptionPreference;	// 24 = 0x18
}

+ (id)connectionDataSegmentWithEncryptionPreference:(long long)arg1 identitySet:(_Bool)arg2 gckSessionConnectionDataBytes:(void *)arg3 gckSessionConnectionDataLength:(unsigned long long)arg4;	// IMP=0x006000000000353a
@property(nonatomic) _Bool hasIdentitySet; // @synthesize hasIdentitySet=_hasIdentitySet;
@property(nonatomic) long long encryptionPreference; // @synthesize encryptionPreference=_encryptionPreference;
@property(retain, nonatomic) NSData *gckSessionConnectionData; // @synthesize gckSessionConnectionData=_gckSessionConnectionData;
- (_Bool)parseConnectionDataBlob:(id)arg1;	// IMP=0x0000000000003681
- (_Bool)parseConnectionDataSegmentWithBytes:(char *)arg1 withLength:(unsigned long long)arg2;	// IMP=0x00000000000035d4
- (void)dealloc;	// IMP=0x00000000000034ff
- (id)initWithConnectionDataBlob:(id)arg1;	// IMP=0x000000000000349a

@end

