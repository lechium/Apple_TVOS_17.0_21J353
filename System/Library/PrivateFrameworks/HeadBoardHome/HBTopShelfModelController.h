//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HBTopShelfExtensionController, HBTopShelfModel, NSString, NSUUID;
@protocol HBTopShelfModelControllerDelegate;

__attribute__((visibility("hidden")))
@interface HBTopShelfModelController : NSObject
{
    NSString *_applicationIdentifier;	// 8 = 0x8
    HBTopShelfModel *_model;	// 16 = 0x10
    id <HBTopShelfModelControllerDelegate> _delegate;	// 24 = 0x18
    HBTopShelfExtensionController *_extensionController;	// 32 = 0x20
    NSUUID *_identifier;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000069510
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak HBTopShelfExtensionController *extensionController; // @synthesize extensionController=_extensionController;
@property(nonatomic) __weak id <HBTopShelfModelControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) HBTopShelfModel *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (void)_performAction:(id)arg1 onItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000068ba7
- (void)_setModel:(id)arg1 notifyDelegate:(_Bool)arg2;	// IMP=0x0000000000068ade
- (_Bool)_isActive;	// IMP=0x0000000000068aab
- (void)_updateModelWithItemUpdates:(id)arg1;	// IMP=0x0000000000068972
- (void)_setModel:(id)arg1;	// IMP=0x0000000000068861
- (id)description;	// IMP=0x0000000000068757
- (void)didSelectAction:(id)arg1 forItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000685d1
- (void)didShowItem:(id)arg1;	// IMP=0x0000000000068548
- (void)dealloc;	// IMP=0x000000000006848a
- (id)_initWithApplicationIdentifier:(id)arg1 model:(id)arg2 extensionController:(id)arg3;	// IMP=0x000000000006838d

@end

