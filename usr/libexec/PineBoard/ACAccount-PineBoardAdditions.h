//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Accounts/ACAccount.h>

@class NSUUID;

@interface ACAccount (PineBoardAdditions)
- (id)pbd_localOverrideNameForHomeUserIdentifier:(id)arg1;	// IMP=0x00200000000a49f9
- (id)pbd_localOverrideNameForItunesAltDSID:(id)arg1;	// IMP=0x00100000000a4917
@property(retain, nonatomic, setter=pbd_setSelectedHomeUserIdentifier:) NSUUID *pbd_selectedHomeUserIdentifier;
@end
