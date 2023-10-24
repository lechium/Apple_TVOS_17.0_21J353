//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, SecureBackup;

@interface SRPInit : NSObject
{
    NSString *_recordLabel;	// 8 = 0x8
    NSDictionary *_escrowRecord;	// 16 = 0x10
    NSString *_recordID;	// 24 = 0x18
    SecureBackup *_sb;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000114a
@property(readonly, retain, nonatomic) SecureBackup *sb; // @synthesize sb=_sb;
@property(copy, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
@property(retain, nonatomic) NSDictionary *escrowRecord; // @synthesize escrowRecord=_escrowRecord;
@property(copy, nonatomic) NSString *recordLabel; // @synthesize recordLabel=_recordLabel;
@property(readonly, copy, nonatomic) NSString *recoveryPassphrase;
@property(readonly, copy, nonatomic) NSString *dsid;
- (id)validateInput;	// IMP=0x000000000000104b
- (id)initWithSecureBackup:(id)arg1;	// IMP=0x0000000000000fe0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
