//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MCMFSNode : NSObject
{
    int _device;	// 8 = 0x8
    unsigned long long _inode;	// 16 = 0x10
    long long _ctime;	// 24 = 0x18
}

@property(readonly, nonatomic) long long ctime; // @synthesize ctime=_ctime;
@property(readonly, nonatomic) int device; // @synthesize device=_device;
@property(readonly, nonatomic) unsigned long long inode; // @synthesize inode=_inode;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003309c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000033011
- (_Bool)isEqualToFSNode:(id)arg1;	// IMP=0x0000000000032fc9
- (unsigned long long)hash;	// IMP=0x0000000000032f90
- (id)description;	// IMP=0x0000000000032ead
- (id)initWithStat:(struct stat *)arg1;	// IMP=0x0000000000032e42
- (id)initWithINode:(unsigned long long)arg1 device:(int)arg2 ctime:(long long)arg3;	// IMP=0x0000000000032dcc

@end

