//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol LAContextExternalizationProt;

@interface OwnerInfos : NSObject
{
    NSMutableArray *_allInfos;	// 8 = 0x8
    id <LAContextExternalizationProt> _context;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000003a8e
@property(readonly, nonatomic) __weak id <LAContextExternalizationProt> context; // @synthesize context=_context;
@property(readonly, nonatomic) NSArray *allInfos;
- (unsigned long long)numberOfOwnersOtherThanPid:(int)arg1;	// IMP=0x00100000000038e4
- (void)addInfo:(id)arg1;	// IMP=0x00100000000038ce
- (id)description;	// IMP=0x0010000000003688
- (id)initWithInfo:(id)arg1 context:(id)arg2;	// IMP=0x00100000000035d1

@end
