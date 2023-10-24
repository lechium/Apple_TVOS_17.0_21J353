//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactStore, CNUIFMFFacade, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNUIFindMyFriendsPeopleSource : NSObject
{
    _Bool _fetching;	// 8 = 0x8
    CNUIFMFFacade *_fmfFacade;	// 16 = 0x10
    CNContactStore *_contactStore;	// 24 = 0x18
    NSArray *_fmfHandles;	// 32 = 0x20
    NSArray *_cachedPeople;	// 40 = 0x28
}

+ (id)sourceWithEnvironment:(id)arg1 contactStore:(id)arg2;	// IMP=0x0010000000091448
+ (id)sourceKind;	// IMP=0x001000000009143b
- (void).cxx_destruct;	// IMP=0x0000000000092290
@property(nonatomic) _Bool fetching; // @synthesize fetching=_fetching;
@property(retain, nonatomic) NSArray *cachedPeople; // @synthesize cachedPeople=_cachedPeople;
@property(retain, nonatomic) NSArray *fmfHandles; // @synthesize fmfHandles=_fmfHandles;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain, nonatomic) CNUIFMFFacade *fmfFacade; // @synthesize fmfFacade=_fmfFacade;
- (CDUnknownBlockType)friendContactFromFriendHandleTransformWithKeysToFetch:(id)arg1;	// IMP=0x0000000000091b2d
- (void)fetchFriends;	// IMP=0x00000000000919a4
- (id)peopleInGroup:(id)arg1 keysToFetch:(id)arg2;	// IMP=0x0000000000091694
- (id)groups;	// IMP=0x00000000000914f3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
