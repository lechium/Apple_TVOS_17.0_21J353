//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKShareParticipant.h>

@interface CKShareParticipant (CKDaemonExtensions)
- (void)_decryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection *)arg1 inShareWithID:(id)arg2 pcsManager:(id)arg3;	// IMP=0x006000000003f547
- (void)_encryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection *)arg1 inShareWithID:(id)arg2 pcsManager:(id)arg3;	// IMP=0x006000000003f140
- (_Bool)hasEncryptedPersonalInfo;	// IMP=0x006000000003f0c4
@end

