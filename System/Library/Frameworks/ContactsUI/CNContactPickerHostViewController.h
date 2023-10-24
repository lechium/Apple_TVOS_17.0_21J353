//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

@class NSExtension, NSString, UINavigationController;
@protocol CNContactPickerContentDelegate, NSCopying;

__attribute__((visibility("hidden")))
@interface CNContactPickerHostViewController : _UIRemoteViewController
{
    void *_addressBook;	// 8 = 0x8
    id <CNContactPickerContentDelegate> _delegate;	// 16 = 0x10
    id <NSCopying> _currentRequestIdentifier;	// 24 = 0x18
    NSExtension *_extension;	// 32 = 0x20
}

+ (_Bool)getViewController:(CDUnknownBlockType)arg1;	// IMP=0x0010000000096673
+ (id)contextForIdentifier:(id)arg1;	// IMP=0x00100000000965f9
+ (id)contactPickerExtension;	// IMP=0x0010000000096510
- (void).cxx_destruct;	// IMP=0x0000000000096cd3
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(retain, nonatomic) id <NSCopying> currentRequestIdentifier; // @synthesize currentRequestIdentifier=_currentRequestIdentifier;
@property(nonatomic) __weak id <CNContactPickerContentDelegate> delegate; // @synthesize delegate=_delegate;
- (void)pickerDidCancel;	// IMP=0x0000000000096c1f
- (void)pickerDidSelectContacts:(id)arg1 properties:(id)arg2;	// IMP=0x0000000000096b94
- (void)pickerDidSelectContact:(id)arg1 property:(id)arg2;	// IMP=0x0000000000096b09
- (void)invalidate;	// IMP=0x0000000000096a2a
- (void)invalidateSelectionAnimated:(_Bool)arg1;	// IMP=0x00000000000969a3
- (void)setupWithOptions:(id)arg1 readyBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000968ec
- (void)dealloc;	// IMP=0x00000000000964d0
@property(readonly, nonatomic) UINavigationController *navigationController;
- (void *)addressBook;	// IMP=0x00000000000964b7
- (void)setAddressBook:(void *)arg1;	// IMP=0x0000000000096471

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
