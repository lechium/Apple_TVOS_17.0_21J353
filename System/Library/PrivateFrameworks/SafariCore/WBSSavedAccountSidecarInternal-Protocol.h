//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariCore/WBSSavedAccountSidecar-Protocol.h>

@class NSString, WBSTOTPGenerator;

@protocol WBSSavedAccountSidecarInternal <WBSSavedAccountSidecar>
@property(copy, nonatomic) NSString *notesEntry;
@property(retain, nonatomic) WBSTOTPGenerator *totpGenerator;
@property(copy, nonatomic) NSString *user;
@end

