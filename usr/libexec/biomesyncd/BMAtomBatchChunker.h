//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol BMAtomBatchChunkerPolicy;

@interface BMAtomBatchChunker : NSObject
{
    id <BMAtomBatchChunkerPolicy> _chunkerPolicy;	// 8 = 0x8
    _Bool _moreComing;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000006601
@property(nonatomic) _Bool moreComing; // @synthesize moreComing=_moreComing;
- (void)didAddAtomWithData:(id)arg1;	// IMP=0x00100000000065d9
- (_Bool)canAddAtomWithData:(id)arg1;	// IMP=0x00100000000065c3
- (id)initWithChunkerPolicy:(id)arg1;	// IMP=0x0010000000006550

@end

