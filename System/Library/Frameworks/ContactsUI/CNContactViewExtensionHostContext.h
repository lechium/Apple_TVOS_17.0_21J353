//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

@class CNContactViewHostViewController, NSString;

__attribute__((visibility("hidden")))
@interface CNContactViewExtensionHostContext : NSExtensionContext
{
    CNContactViewHostViewController *_viewController;	// 8 = 0x8
}

+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x0010000000056c36
+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x0010000000056c1d
- (void).cxx_destruct;	// IMP=0x00000000000573da
@property(nonatomic) __weak CNContactViewHostViewController *viewController; // @synthesize viewController=_viewController;
- (void)asyncShouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3;	// IMP=0x0000000000057231
- (void)isPresentingFullscreen:(_Bool)arg1;	// IMP=0x0000000000057192
- (void)didDeleteContact:(id)arg1;	// IMP=0x00000000000570b8
- (void)didCompleteWithContact:(id)arg1;	// IMP=0x0000000000056fde
- (void)updateEditing:(_Bool)arg1 doneButtonEnabled:(_Bool)arg2 doneButtonText:(id)arg3;	// IMP=0x0000000000056ede
- (_Bool)shouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3;	// IMP=0x0000000000056eb7
- (void)toggleEditing;	// IMP=0x0000000000056e7a
- (void)editCancel;	// IMP=0x0000000000056e3d
- (void)didChangeToEditMode:(_Bool)arg1;	// IMP=0x0000000000056df3
- (void)setupWithOptions:(id)arg1 readyBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000056d68
- (id)protocolService;	// IMP=0x0000000000056c4f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
