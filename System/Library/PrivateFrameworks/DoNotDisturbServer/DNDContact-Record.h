//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DoNotDisturb/DNDContact.h>

@interface DNDContact (Record)
+ (id)contactForRecord:(id)arg1;	// IMP=0x005000000000b7e0
+ (id)keysToFetch;	// IMP=0x005000000003c138
+ (id)contactWithCNContact:(id)arg1;	// IMP=0x005000000003bbfe
- (id)makeRecord;	// IMP=0x001000000000b9a9
- (id)sanitizedContactWithContactStore:(id)arg1 withError:(out id *)arg2;	// IMP=0x001000000003c241
- (_Bool)needsSanitization;	// IMP=0x001000000005aec8
@end

