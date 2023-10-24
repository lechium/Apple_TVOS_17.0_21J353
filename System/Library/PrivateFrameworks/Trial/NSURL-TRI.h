//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (TRI)
+ (id)triContainerURLWithPath:(id)arg1 containerId:(id)arg2 containerType:(long long)arg3;	// IMP=0x0080000000058fef
+ (id)triParseURLFromString:(id)arg1;	// IMP=0x00800000000587ef
+ (id)triParseURLFromString:(id)arg1 isDirectory:(_Bool)arg2;	// IMP=0x008000000005870a
- (id)triURLByResolvingSymlinksInPathIncludingPrivate;	// IMP=0x00000000000590fb
- (_Bool)triIsContainerURL;	// IMP=0x0000000000058f6c
- (id)triPathAsOwner:(_Bool)arg1;	// IMP=0x0000000000058c05
- (_Bool)triIsEqual:(id)arg1;	// IMP=0x0000000000058b1a
- (id)triSaveURLToString;	// IMP=0x0000000000058803
@end
