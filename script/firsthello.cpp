#include <gazebo/gazebo.hh>

namespace gazebo
{
  class WorldPluginMyFirstProject : public WorldPlugin
  {
    public: WorldPluginMyFirstProject() : WorldPlugin()
            {
              printf("Welcome to Bethany's World!\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyFirstProject)
}

