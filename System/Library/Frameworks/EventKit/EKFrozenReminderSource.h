//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, REMAccount;

__attribute__((visibility("hidden")))
@interface EKFrozenReminderSource
{
    NSString *_sourceIdentifier;	// 8 = 0x8
    REMAccount *_remAccount;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000127922
@property(readonly, nonatomic) REMAccount *remAccount; // @synthesize remAccount=_remAccount;
@property(readonly, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;

@end

