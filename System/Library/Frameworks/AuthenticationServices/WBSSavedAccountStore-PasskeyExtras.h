//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariCore/WBSSavedAccountStore.h>

@interface WBSSavedAccountStore (PasskeyExtras)
+ (void)updateUserVisibleName:(id)arg1 forPasskeyWithIdentifier:(id)arg2;	// IMP=0x001000000000935c
+ (void)deletePasskeyWithIdentifier:(id)arg1;	// IMP=0x00100000000092bf
+ (id)_passkeyDataFromWebKitPasskeyData:(id)arg1;	// IMP=0x0010000000008ea3
+ (id)passkeyDataForPasskeyCredentialID:(id)arg1;	// IMP=0x0010000000008e3d
+ (id)passkeysData;	// IMP=0x0010000000008dd7
@end

