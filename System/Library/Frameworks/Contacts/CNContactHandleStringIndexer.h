//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNCache, NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface CNContactHandleStringIndexer : NSObject
{
    CNCache *_indexImpl;	// 8 = 0x8
    NSArray *_targetHandleStrings;	// 16 = 0x10
}

+ (id)indexByMatchingIndexWithRawHandles:(id)arg1 toTargetHandleStrings:(id)arg2;	// IMP=0x0060000000053a46
- (void).cxx_destruct;	// IMP=0x0000000000053f41
@property(readonly, nonatomic) NSArray *targetHandleStrings; // @synthesize targetHandleStrings=_targetHandleStrings;
@property(readonly, nonatomic) CNCache *indexImpl; // @synthesize indexImpl=_indexImpl;
- (void)indexPhoneNumbersOnContact:(id)arg1;	// IMP=0x000000000005377f
- (void)indexEmailAddressesOnContact:(id)arg1;	// IMP=0x00000000000534e3
- (void)indexContact:(id)arg1;	// IMP=0x000000000005348e
- (void)indexContacts:(id)arg1;	// IMP=0x0000000000053364
- (id)indexWithRawHandles;	// IMP=0x0000000000052fcc
@property(readonly, nonatomic) NSDictionary *index;
- (id)description;	// IMP=0x0000000000052f12
- (id)initWithTargetHandleStrings:(id)arg1;	// IMP=0x0000000000052e5a
- (id)init;	// IMP=0x0000000000052e41

@end

