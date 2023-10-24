//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNContactAction.h"

@class CNContact, NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface CNContactCreateNewContactAction : CNContactAction
{
    CNContact *_createdContact;	// 8 = 0x8
    UIViewController *_presentingViewController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001a2d0
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) CNContact *createdContact; // @synthesize createdContact=_createdContact;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;	// IMP=0x000000000001a18a
- (void)performActionWithSender:(id)arg1;	// IMP=0x0000000000019f90

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

