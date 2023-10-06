#pragma once

#include <vcpkg/fwd/vcpkgcmdarguments.h>
#include <vcpkg/fwd/vcpkgpaths.h>

namespace vcpkg
{
    extern const CommandMetadata CommandZChangelogMetadata;
    void command_z_changelog_and_exit(const VcpkgCmdArguments& args, const VcpkgPaths& paths);
}