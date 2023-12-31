//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@class NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface WebElementDictionary : NSDictionary
{
    void *_result;	// 8 = 0x8
    NSMutableDictionary *_cache;	// 16 = 0x10
    NSMutableSet *_nilValues;	// 24 = 0x18
    _Bool _cacheComplete;	// 32 = 0x20
}

+ (void)initializeLookupTable;	// IMP=0x00600000000ef820
+ (void)initialize;	// IMP=0x00600000000ef810
- (id)_isInScrollBar;	// IMP=0x00000000000f0720
- (id)_isContentEditable;	// IMP=0x00000000000f06e0
- (id)_isLiveLink;	// IMP=0x00000000000f0690
- (id)_textContent;	// IMP=0x00000000000f0600
- (id)_titleDisplayString;	// IMP=0x00000000000f0570
- (id)_targetWebFrame;	// IMP=0x00000000000f0520
- (id)_absoluteLinkURL;	// IMP=0x00000000000f0490
- (id)_title;	// IMP=0x00000000000f03f0
- (id)_isSelected;	// IMP=0x00000000000f03b0
- (id)_absoluteMediaURL;	// IMP=0x00000000000f0320
- (id)_absoluteImageURL;	// IMP=0x00000000000f0290
- (id)_spellingToolTip;	// IMP=0x00000000000f01f0
- (id)_altDisplayString;	// IMP=0x00000000000f0160
- (id)_webFrame;	// IMP=0x00000000000f0120
- (id)_domNode;	// IMP=0x00000000000f0100
- (id)objectForKey:(id)arg1;	// IMP=0x00000000000efef0
- (id)keyEnumerator;	// IMP=0x00000000000efea0
- (unsigned long long)count;	// IMP=0x00000000000efe50
- (void)_fillCache;	// IMP=0x00000000000efde0
- (void)dealloc;	// IMP=0x00000000000efd40
- (id)initWithHitTestResult:(const void *)arg1;	// IMP=0x00000000000efca0

@end

